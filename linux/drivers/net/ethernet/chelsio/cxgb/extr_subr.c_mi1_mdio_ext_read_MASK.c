
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct net_device {struct adapter* ml_priv; } ;
struct adapter {int tpi_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct adapter*,int ,unsigned int*) ;
 int FUNC_3 (struct adapter*,int ,int) ;
 int FUNC_4 (struct adapter*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_5, int VAR_6, int VAR_7,
        u16 VAR_8)
{
 struct adapter *VAR_9 = VAR_5->ml_priv;
 u32 VAR_10 = FUNC_1(VAR_7) | FUNC_0(VAR_6);
 unsigned int VAR_11;

 FUNC_5(&VAR_9->tpi_lock);


 FUNC_3(VAR_9, VAR_0, VAR_10);
 FUNC_3(VAR_9, VAR_1, VAR_8);
 FUNC_3(VAR_9, VAR_2,
         VAR_3);
 FUNC_4(VAR_9, VAR_2);


 FUNC_3(VAR_9,
   VAR_2, VAR_4);
 FUNC_4(VAR_9, VAR_2);


 FUNC_2(VAR_9, VAR_1, &VAR_11);
 FUNC_6(&VAR_9->tpi_lock);
 return VAR_11;
}
