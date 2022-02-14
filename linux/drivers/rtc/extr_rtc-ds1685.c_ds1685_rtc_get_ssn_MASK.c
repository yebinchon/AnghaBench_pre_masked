
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds1685_priv {int (* read ) (struct ds1685_priv*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ds1685_priv*,int ) ;
 int FUNC_1 (struct ds1685_priv*,int ) ;
 int FUNC_2 (struct ds1685_priv*,int ) ;
 int FUNC_3 (struct ds1685_priv*,int ) ;
 int FUNC_4 (struct ds1685_priv*,int ) ;
 int FUNC_5 (struct ds1685_priv*,int ) ;
 int FUNC_6 (struct ds1685_priv*,int ) ;
 int FUNC_7 (struct ds1685_priv*,int ) ;

__attribute__((used)) static inline void
FUNC_8(struct ds1685_priv *VAR_8, u8 *VAR_9)
{
 VAR_9[0] = VAR_8->read(VAR_8, VAR_7);
 VAR_9[1] = VAR_8->read(VAR_8, VAR_0);
 VAR_9[2] = VAR_8->read(VAR_8, VAR_1);
 VAR_9[3] = VAR_8->read(VAR_8, VAR_2);
 VAR_9[4] = VAR_8->read(VAR_8, VAR_3);
 VAR_9[5] = VAR_8->read(VAR_8, VAR_4);
 VAR_9[6] = VAR_8->read(VAR_8, VAR_5);
 VAR_9[7] = VAR_8->read(VAR_8, VAR_6);
}
