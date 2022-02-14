
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orangefs_object_kref {int khandle; } ;
typedef int ino_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline ino_t FUNC_1(struct orangefs_object_kref *VAR_0)
{
 if (!VAR_0)
  return 0;
 return FUNC_0(&(VAR_0->khandle));
}
