
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uwb_rc_evt_beacon {int dummy; } ;
struct TYPE_2__ {int list; } ;
struct uwb_rc {TYPE_1__ uwb_beca; } ;
struct uwb_beca_e {unsigned long ts_jiffies; int node; int * uwb_dev; } ;
struct uwb_beacon_frame {int dummy; } ;


 int VAR_0 ;
 struct uwb_beca_e* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct uwb_beca_e*) ;

__attribute__((used)) static
struct uwb_beca_e *FUNC_3(struct uwb_rc *VAR_1,
      struct uwb_rc_evt_beacon *VAR_2,
      struct uwb_beacon_frame *VAR_3,
      unsigned long VAR_4)
{
 struct uwb_beca_e *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_0);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 FUNC_2(VAR_5);
 VAR_5->ts_jiffies = VAR_4;
 VAR_5->uwb_dev = ((void*)0);
 FUNC_1(&VAR_5->node, &VAR_1->uwb_beca.list);
 return VAR_5;
}
