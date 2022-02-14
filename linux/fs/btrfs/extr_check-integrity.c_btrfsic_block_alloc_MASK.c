
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfsic_block {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfsic_block*) ;
 struct btrfsic_block* FUNC_1 (int,int ) ;

__attribute__((used)) static struct btrfsic_block *FUNC_2(void)
{
 struct btrfsic_block *VAR_1;

 VAR_1 = FUNC_1(sizeof(*VAR_1), VAR_0);
 if (((void*)0) != VAR_1)
  FUNC_0(VAR_1);

 return VAR_1;
}
