
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rp5c01_priv {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rp5c01_priv*,unsigned int) ;
 int FUNC_1 (struct rp5c01_priv*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_5, unsigned int VAR_6, void *VAR_7,
        size_t VAR_8)
{
 struct rp5c01_priv *VAR_9 = VAR_5;
 u8 *VAR_10 = VAR_7;

 FUNC_2(&VAR_9->lock);

 for (; VAR_8; VAR_8--) {
  u8 VAR_11;

  FUNC_1(VAR_9,
        VAR_4 | VAR_2,
        VAR_0);
  VAR_11 = FUNC_0(VAR_9, VAR_6) << 4;
  FUNC_1(VAR_9,
        VAR_4 | VAR_3,
        VAR_0);
  VAR_11 |= FUNC_0(VAR_9, VAR_6++);
  FUNC_1(VAR_9, VAR_4 | VAR_1,
        VAR_0);
  *VAR_10++ = VAR_11;
 }

 FUNC_3(&VAR_9->lock);
 return 0;
}
