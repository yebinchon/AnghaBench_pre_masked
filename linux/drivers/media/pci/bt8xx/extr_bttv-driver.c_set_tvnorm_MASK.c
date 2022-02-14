
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct TYPE_5__ {scalar_t__ height; scalar_t__ top; } ;
struct TYPE_7__ {TYPE_1__ bounds; } ;
struct bttv_tvnorm {int adelay; int bdelay; int vbipack; int v4l2_id; int iform; TYPE_3__ cropcap; } ;
struct TYPE_6__ {int type; } ;
struct bttv {unsigned int tvnorm; int resources; TYPE_2__ c; scalar_t__ crop_start; int * crop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 unsigned int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int FUNC_1 (struct bttv*) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct bttv*,int ,int ,int ) ;
 int FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (struct bttv*,int ) ;
 struct bttv_tvnorm* VAR_9 ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (TYPE_3__*,TYPE_3__*,int) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_9(struct bttv *VAR_12, unsigned int VAR_13)
{
 const struct bttv_tvnorm *VAR_14;
 v4l2_std_id VAR_15;

 FUNC_0(VAR_13 >= VAR_7);
 FUNC_0(VAR_12->tvnorm >= VAR_7);

 VAR_14 = &VAR_9[VAR_13];

 if (FUNC_8(&VAR_9[VAR_12->tvnorm].cropcap, &VAR_14->cropcap,
      sizeof (VAR_14->cropcap))) {
  FUNC_4(&VAR_12->crop[0], VAR_13);
  VAR_12->crop[1] = VAR_12->crop[0];

  if (0 == (VAR_12->resources & VAR_8)) {
   VAR_12->crop_start = VAR_14->cropcap.bounds.top
    + VAR_14->cropcap.bounds.height;
  }
 }

 VAR_12->tvnorm = VAR_13;

 FUNC_6(VAR_14->adelay, VAR_0);
 FUNC_6(VAR_14->bdelay, VAR_1);
 FUNC_2(VAR_14->iform,~(VAR_3|VAR_4),
       VAR_2);
 FUNC_6(VAR_14->vbipack, VAR_6);
 FUNC_6(1, VAR_5);
 FUNC_1(VAR_12);

 switch (VAR_12->c.type) {
 case 128:
 case 129:
  FUNC_5(VAR_12, FUNC_7());
  break;
 }
 VAR_15 = VAR_14->v4l2_id;
 FUNC_3(VAR_12, VAR_11, VAR_10, VAR_15);

 return 0;
}
