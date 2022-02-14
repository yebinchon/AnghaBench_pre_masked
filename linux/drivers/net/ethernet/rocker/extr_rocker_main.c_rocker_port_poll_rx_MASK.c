
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rocker_port {int rx_ring; TYPE_2__* dev; struct rocker* rocker; } ;
struct rocker_desc_info {int dummy; } ;
struct rocker {int dummy; } ;
struct napi_struct {int dummy; } ;
struct TYPE_3__ {int rx_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int FUNC_0 (struct napi_struct*,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,char*,int) ;
 int FUNC_3 (struct rocker_desc_info*) ;
 int FUNC_4 (struct rocker_desc_info*) ;
 int FUNC_5 (struct rocker const*,int *,struct rocker_desc_info*) ;
 struct rocker_desc_info* FUNC_6 (int *) ;
 int FUNC_7 (struct rocker const*,int *,int) ;
 struct rocker_port* FUNC_8 (struct napi_struct*) ;
 int FUNC_9 (struct rocker const*,struct rocker_port*,struct rocker_desc_info*) ;

__attribute__((used)) static int FUNC_10(struct napi_struct *VAR_0, int VAR_1)
{
 struct rocker_port *VAR_2 = FUNC_8(VAR_0);
 const struct rocker *VAR_3 = VAR_2->rocker;
 struct rocker_desc_info *VAR_4;
 u32 VAR_5 = 0;
 int VAR_6;


 while (VAR_5 < VAR_1 &&
        (VAR_4 = FUNC_6(&VAR_2->rx_ring))) {
  VAR_6 = FUNC_3(VAR_4);
  if (VAR_6) {
   if (FUNC_1())
    FUNC_2(VAR_2->dev, "rx desc received with err %d\n",
        VAR_6);
  } else {
   VAR_6 = FUNC_9(VAR_3, VAR_2,
        VAR_4);
   if (VAR_6 && FUNC_1())
    FUNC_2(VAR_2->dev, "rx processing failed with err %d\n",
        VAR_6);
  }
  if (VAR_6)
   VAR_2->dev->stats.rx_errors++;

  FUNC_4(VAR_4);
  FUNC_5(VAR_3, &VAR_2->rx_ring, VAR_4);
  VAR_5++;
 }

 if (VAR_5 < VAR_1)
  FUNC_0(VAR_0, VAR_5);

 FUNC_7(VAR_3, &VAR_2->rx_ring, VAR_5);

 return VAR_5;
}
