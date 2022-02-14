
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int read_retries; int (* setup_read_retry ) (struct nand_chip*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct nand_chip*,int) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_2, int VAR_3)
{
 FUNC_0("setting READ RETRY mode %d\n", VAR_3);

 if (VAR_3 >= VAR_2->read_retries)
  return -VAR_0;

 if (!VAR_2->setup_read_retry)
  return -VAR_1;

 return VAR_2->setup_read_retry(VAR_2, VAR_3);
}
