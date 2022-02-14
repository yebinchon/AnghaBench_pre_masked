
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfsic_stack_frame {int magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct btrfsic_stack_frame* FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static struct btrfsic_stack_frame *FUNC_2(void)
{
 struct btrfsic_stack_frame *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_1);
 if (((void*)0) == VAR_2)
  FUNC_1("btrfsic: alloc memory failed!\n");
 else
  VAR_2->magic = VAR_0;
 return VAR_2;
}
