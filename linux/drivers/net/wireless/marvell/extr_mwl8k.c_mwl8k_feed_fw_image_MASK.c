
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mwl8k_priv {scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned char*,int const*,int) ;
 int FUNC_4 (struct mwl8k_priv*,unsigned char*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct mwl8k_priv *VAR_6,
    const u8 *VAR_7, size_t VAR_8)
{
 unsigned char *VAR_9;
 int VAR_10, VAR_11 = 0;
 u32 VAR_12, VAR_13;

 VAR_9 = FUNC_2(1024, VAR_4);
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 VAR_12 = 0;
 VAR_13 = 0;
 VAR_10 = 1000;
 while (VAR_10 > 0) {
  u32 VAR_14;

  VAR_14 = FUNC_0(VAR_6->regs + VAR_5);
  if (VAR_14 & 1) {
   VAR_14 &= ~1;
   VAR_10--;
  } else {
   VAR_12 += VAR_13;
   VAR_8 -= VAR_13;
  }

  if (VAR_14 > 1024 || VAR_14 > VAR_8) {
   VAR_11 = -VAR_1;
   break;
  }

  if (VAR_8 == 0) {
   VAR_11 = 0;
   break;
  }

  if (VAR_14 == 0) {
   VAR_11 = -VAR_2;
   VAR_10--;
   FUNC_5(1);
   continue;
  }

  VAR_13 = VAR_14;
  FUNC_3(VAR_9, VAR_7 + VAR_12, VAR_14);

  VAR_11 = FUNC_4(VAR_6, VAR_9, VAR_14);
  if (VAR_11)
   break;
 }

 if (!VAR_11 && VAR_8 != 0)
  VAR_11 = -VAR_3;

 FUNC_1(VAR_9);

 return VAR_11;
}
