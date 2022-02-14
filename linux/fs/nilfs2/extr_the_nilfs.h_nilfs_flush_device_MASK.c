
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_flushed_device; int ns_bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (struct the_nilfs*,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static inline int FUNC_3(struct the_nilfs *VAR_3)
{
 int VAR_4;

 if (!FUNC_1(VAR_3, VAR_0) || VAR_3->ns_flushed_device)
  return 0;

 VAR_3->ns_flushed_device = 1;




 FUNC_2();

 VAR_4 = FUNC_0(VAR_3->ns_bdev, VAR_2, ((void*)0));
 if (VAR_4 != -VAR_1)
  VAR_4 = 0;
 return VAR_4;
}
