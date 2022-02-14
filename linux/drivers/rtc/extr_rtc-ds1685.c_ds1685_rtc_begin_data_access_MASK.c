
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds1685_priv {int (* read ) (struct ds1685_priv*,int ) ;int (* write ) (struct ds1685_priv*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct ds1685_priv*) ;
 int FUNC_2 (struct ds1685_priv*,int ,int) ;
 int FUNC_3 (struct ds1685_priv*,int ) ;
 int FUNC_4 (struct ds1685_priv*,int ) ;

__attribute__((used)) static inline void
FUNC_5(struct ds1685_priv *VAR_4)
{

 VAR_4->write(VAR_4, VAR_1,
     (VAR_4->read(VAR_4, VAR_1) | VAR_2));


 while (VAR_4->read(VAR_4, VAR_3) & VAR_0)
  FUNC_0();


 FUNC_1(VAR_4);
}
