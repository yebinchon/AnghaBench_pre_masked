
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
struct pcnet32_private {scalar_t__ chip_version; int lock; struct pcnet32_access* a; } ;
struct pcnet32_access {int (* read_csr ) (int ,int ) ;int (* write_csr ) (int ,int ,int) ;} ;
struct net_device {int base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct pcnet32_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct pcnet32_private*,int ,int ,struct net_device*,char*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_5, unsigned long *VAR_6,
      int VAR_7)
{
 int VAR_8;
 struct pcnet32_private *VAR_9 = FUNC_2(VAR_5);
 const struct pcnet32_access *VAR_10 = VAR_9->a;
 ulong VAR_11 = VAR_5->base_addr;
 int VAR_12;


 if (VAR_9->chip_version < VAR_3)
  return 0;


 VAR_8 = VAR_10->read_csr(VAR_11, VAR_0);
 VAR_10->write_csr(VAR_11, VAR_0, VAR_8 | VAR_1);


 VAR_12 = 0;
 while (!(VAR_10->read_csr(VAR_11, VAR_0) & VAR_1)) {
  FUNC_5(&VAR_9->lock, *VAR_6);
  if (VAR_7)
   FUNC_1(1);
  else
   FUNC_0(1);
  FUNC_4(&VAR_9->lock, *VAR_6);
  VAR_12++;
  if (VAR_12 > 200) {
   FUNC_3(VAR_9, VAR_4, VAR_2, VAR_5,
         "Error getting into suspend!\n");
   return 0;
  }
 }
 return 1;
}
