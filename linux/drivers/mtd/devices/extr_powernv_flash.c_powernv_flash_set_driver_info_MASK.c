
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {struct device* parent; } ;
struct mtd_info {int writebufsize; int writesize; TYPE_1__ dev; int _write; int _read; int _erase; int owner; int erasesize; int size; int flags; int type; int name; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,int ,char*,int ) ;
 int FUNC_2 (struct mtd_info*,int ) ;
 int FUNC_3 (int ,char*,int *) ;
 int FUNC_4 (int ,char*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_5(struct device *VAR_7,
  struct mtd_info *VAR_8)
{
 u64 VAR_9;
 u32 VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_7->of_node, "ibm,flash-block-size",
   &VAR_10);
 if (VAR_11) {
  FUNC_0(VAR_7, "couldn't get resource block size information\n");
  return VAR_11;
 }

 VAR_11 = FUNC_4(VAR_7->of_node, "reg", &VAR_9);
 if (VAR_11) {
  FUNC_0(VAR_7, "couldn't get resource size information\n");
  return VAR_11;
 }





 VAR_8->name = FUNC_1(VAR_7, VAR_0, "%pOFP", VAR_7->of_node);
 VAR_8->type = VAR_1;
 VAR_8->flags = VAR_2;
 VAR_8->size = VAR_9;
 VAR_8->erasesize = VAR_10;
 VAR_8->writebufsize = VAR_8->writesize = 1;
 VAR_8->owner = VAR_3;
 VAR_8->_erase = VAR_4;
 VAR_8->_read = VAR_5;
 VAR_8->_write = VAR_6;
 VAR_8->dev.parent = VAR_7;
 FUNC_2(VAR_8, VAR_7->of_node);
 return 0;
}
