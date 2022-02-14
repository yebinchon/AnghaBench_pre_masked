
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev_addr; } ;
struct airo_info {int * fids; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct airo_info*) ;
 int FUNC_2 (struct airo_info*,int ,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (struct airo_info*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct airo_info *VAR_5,struct net_device *VAR_6){
 int VAR_7,VAR_8;

 FUNC_3(1);
 FUNC_0 (VAR_1, &VAR_5->flags);
 if (FUNC_4(VAR_2, &VAR_5->flags)) {
  VAR_8 = FUNC_1(VAR_5);
  if (VAR_8 != VAR_4)
   return VAR_8;
 }
 VAR_8 = FUNC_2(VAR_5, VAR_6->dev_addr, 1);

 if (!FUNC_4(VAR_2,&VAR_5->flags))
  for( VAR_7 = 0; VAR_7 < VAR_3; VAR_7++ ) {
   VAR_5->fids[VAR_7] = FUNC_5
    ( VAR_5, VAR_0, VAR_7 >= VAR_3 / 2 );
  }

 FUNC_3(1);
 return VAR_8;
}
