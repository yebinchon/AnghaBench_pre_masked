
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ppp_net {int all_ppp_mutex; int units_idr; } ;
struct TYPE_3__ {int index; } ;
struct ppp {TYPE_1__ file; TYPE_2__* dev; int ppp_net; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ppp_net* FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ,char*,int) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *,struct ppp*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,struct ppp*,int) ;

__attribute__((used)) static int FUNC_10(struct ppp *VAR_3, int VAR_4, bool VAR_5)
{
 struct ppp_net *VAR_6 = FUNC_3(VAR_3->ppp_net);
 int VAR_7;

 FUNC_1(&VAR_6->all_ppp_mutex);

 if (VAR_4 < 0) {
  VAR_7 = FUNC_7(&VAR_6->units_idr, VAR_3);
  if (VAR_7 < 0)
   goto err;
 } else {





  if (FUNC_6(&VAR_6->units_idr, VAR_4)) {
   VAR_7 = -VAR_0;
   goto err;
  }
  VAR_7 = FUNC_9(&VAR_6->units_idr, VAR_3, VAR_4);
  if (VAR_7 < 0) {

   VAR_7 = -VAR_0;
   goto err;
  }
 }
 VAR_3->file.index = VAR_7;

 if (!VAR_5)
  FUNC_5(VAR_3->dev->name, VAR_1, "ppp%i", VAR_3->file.index);

 FUNC_2(&VAR_6->all_ppp_mutex);

 VAR_7 = FUNC_4(VAR_3->dev);
 if (VAR_7 < 0)
  goto err_unit;

 FUNC_0(&VAR_2);

 return 0;

err_unit:
 FUNC_1(&VAR_6->all_ppp_mutex);
 FUNC_8(&VAR_6->units_idr, VAR_3->file.index);
err:
 FUNC_2(&VAR_6->all_ppp_mutex);

 return VAR_7;
}
