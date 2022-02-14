
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {int peb_count; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned long* FUNC_1 (int ) ;
 int VAR_1 ;
 unsigned long* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct ubi_device*) ;

__attribute__((used)) static inline unsigned long *FUNC_4(struct ubi_device *VAR_2)
{
 unsigned long *VAR_3;

 if (!FUNC_3(VAR_2))
  return ((void*)0);

 VAR_3 = FUNC_2(FUNC_0(VAR_2->peb_count), sizeof(unsigned long),
        VAR_1);
 if (!VAR_3)
  return FUNC_1(-VAR_0);

 return VAR_3;
}
