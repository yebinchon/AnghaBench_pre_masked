
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct eventfd_ctx {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct eventfd_ctx*) ;
 int FUNC_1 (struct eventfd_ctx*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct eventfd_ctx* FUNC_2 (int) ;
 int FUNC_3 (struct eventfd_ctx*) ;
 int FUNC_4 (struct eventfd_ctx*,int) ;

__attribute__((used)) static int FUNC_5(struct eventfd_ctx **VAR_4,
        unsigned int VAR_5, uint32_t VAR_6,
        void *VAR_7)
{

 if (VAR_6 & VAR_3) {
  if (*VAR_4) {
   if (VAR_5) {
    FUNC_4(*VAR_4, 1);
   } else {
    FUNC_3(*VAR_4);
    *VAR_4 = ((void*)0);
   }
   return 0;
  }
 } else if (VAR_6 & VAR_1) {
  uint8_t VAR_8;

  if (!VAR_5)
   return -VAR_0;

  VAR_8 = *(uint8_t *)VAR_7;
  if (VAR_8 && *VAR_4)
   FUNC_4(*VAR_4, 1);

  return 0;
 } else if (VAR_6 & VAR_2) {
  int32_t VAR_9;

  if (!VAR_5)
   return -VAR_0;

  VAR_9 = *(int32_t *)VAR_7;
  if (VAR_9 == -1) {
   if (*VAR_4)
    FUNC_3(*VAR_4);
   *VAR_4 = ((void*)0);
  } else if (VAR_9 >= 0) {
   struct eventfd_ctx *VAR_10;

   VAR_10 = FUNC_2(VAR_9);
   if (FUNC_0(VAR_10))
    return FUNC_1(VAR_10);

   if (*VAR_4)
    FUNC_3(*VAR_4);

   *VAR_4 = VAR_10;
  }
  return 0;
 }

 return -VAR_0;
}
