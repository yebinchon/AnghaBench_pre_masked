
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct hnae3_handle {TYPE_3__* pdev; TYPE_2__* ae_algo; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* set_channels ) (struct hnae3_handle*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct hnae3_handle*,int ) ;
 int FUNC_2 (struct hnae3_handle*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hnae3_handle *VAR_3, u32 VAR_4,
    bool VAR_5)
{
 int VAR_6;

 VAR_6 = VAR_3->ae_algo->ops->set_channels(VAR_3, VAR_4,
       VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_3->pdev->dev,
   "Change tqp num(%u) fail.\n", VAR_4);
  return VAR_6;
 }

 VAR_6 = FUNC_1(VAR_3, VAR_0);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_2);
 if (VAR_6)
  FUNC_1(VAR_3, VAR_1);

 return VAR_6;
}
