
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ssbi {scalar_t__ controller_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ssbi*,int ) ;
 int FUNC_2 (struct ssbi*,int ,int ) ;
 int FUNC_3 (struct ssbi*,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct ssbi *VAR_7, u16 VAR_8, u8 *VAR_9, int VAR_10)
{
 u32 VAR_11 = VAR_4 | ((VAR_8 & 0xff) << 16);
 int VAR_12 = 0;

 if (VAR_7->controller_type == VAR_0) {
  u32 VAR_13 = FUNC_1(VAR_7, VAR_2);
  VAR_13 = FUNC_0(VAR_13, VAR_8);
  FUNC_3(VAR_7, VAR_13, VAR_2);
 }

 while (VAR_10) {
  VAR_12 = FUNC_2(VAR_7, VAR_6, 0);
  if (VAR_12)
   goto err;

  FUNC_3(VAR_7, VAR_11, VAR_1);
  VAR_12 = FUNC_2(VAR_7, VAR_5, 0);
  if (VAR_12)
   goto err;
  *VAR_9++ = FUNC_1(VAR_7, VAR_3) & 0xff;
  VAR_10--;
 }

err:
 return VAR_12;
}
