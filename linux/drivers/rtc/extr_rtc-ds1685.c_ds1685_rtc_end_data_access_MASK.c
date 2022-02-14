
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds1685_priv {int (* read ) (struct ds1685_priv*,int ) ;int (* write ) (struct ds1685_priv*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ds1685_priv*) ;
 int FUNC_1 (struct ds1685_priv*,int ,int) ;
 int FUNC_2 (struct ds1685_priv*,int ) ;

__attribute__((used)) static inline void
FUNC_3(struct ds1685_priv *VAR_2)
{

 FUNC_0(VAR_2);


 VAR_2->write(VAR_2, VAR_0,
     (VAR_2->read(VAR_2, VAR_0) & ~(VAR_1)));
}
