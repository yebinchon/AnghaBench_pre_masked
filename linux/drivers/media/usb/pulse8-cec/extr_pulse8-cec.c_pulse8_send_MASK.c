
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct serio {int dummy; } ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 int FUNC_0 (struct serio*,scalar_t__ const) ;

__attribute__((used)) static int FUNC_1(struct serio *VAR_4, const u8 *VAR_5, u8 VAR_6)
{
 int VAR_7 = 0;

 VAR_7 = FUNC_0(VAR_4, VAR_3);
 if (VAR_7)
  return VAR_7;
 for (; !VAR_7 && VAR_6; VAR_5++, VAR_6--) {
  if (*VAR_5 >= VAR_1) {
   VAR_7 = FUNC_0(VAR_4, VAR_1);
   if (!VAR_7)
    VAR_7 = FUNC_0(VAR_4, *VAR_5 - VAR_2);
  } else {
   VAR_7 = FUNC_0(VAR_4, *VAR_5);
  }
 }
 if (!VAR_7)
  VAR_7 = FUNC_0(VAR_4, VAR_0);

 return VAR_7;
}
