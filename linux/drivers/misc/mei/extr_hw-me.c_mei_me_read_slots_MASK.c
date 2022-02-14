
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct mei_device {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct mei_device*) ;
 void* FUNC_1 (struct mei_device*) ;
 int FUNC_2 (void**,void**,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct mei_device *VAR_1, unsigned char *VAR_2,
        unsigned long VAR_3)
{
 u32 *VAR_4 = (u32 *)VAR_2;

 for (; VAR_3 >= VAR_0; VAR_3 -= VAR_0)
  *VAR_4++ = FUNC_1(VAR_1);

 if (VAR_3 > 0) {
  u32 VAR_5 = FUNC_1(VAR_1);

  FUNC_2(VAR_4, &VAR_5, VAR_3);
 }

 FUNC_0(VAR_1);
 return 0;
}
