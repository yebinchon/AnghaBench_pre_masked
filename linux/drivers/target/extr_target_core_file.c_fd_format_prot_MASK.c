
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int block_size; int pi_prot_type; } ;
struct se_device {unsigned long long prot_length; TYPE_1__* transport; TYPE_2__ dev_attrib; } ;
struct TYPE_3__ {scalar_t__ (* get_blocks ) (struct se_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct se_device*,int ,scalar_t__,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int,int) ;
 int FUNC_2 (char*,unsigned long long) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct se_device*) ;
 scalar_t__ FUNC_5 (struct se_device*) ;
 int FUNC_6 (unsigned char*) ;
 unsigned char* FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct se_device *VAR_3)
{
 unsigned char *VAR_4;
 int VAR_5 = VAR_2 * VAR_3->dev_attrib.block_size;
 int VAR_6;

 if (!VAR_3->dev_attrib.pi_prot_type) {
  FUNC_3("Unable to format_prot while pi_prot_type == 0\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_7(VAR_5);
 if (!VAR_4) {
  FUNC_3("Unable to allocate FILEIO prot buf\n");
  return -VAR_1;
 }

 FUNC_2("Using FILEIO prot_length: %llu\n",
   (unsigned long long)(VAR_3->transport->get_blocks(VAR_3) + 1) *
     VAR_3->prot_length);

 FUNC_1(VAR_4, 0xff, VAR_5);
 VAR_6 = FUNC_0(VAR_3, 0, VAR_3->transport->get_blocks(VAR_3) + 1,
         VAR_4, VAR_5);
 FUNC_6(VAR_4);
 return VAR_6;
}
