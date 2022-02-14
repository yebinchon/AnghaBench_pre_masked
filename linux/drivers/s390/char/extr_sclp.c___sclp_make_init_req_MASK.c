
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sclp_req {int dummy; } ;
struct TYPE_4__ {int length; } ;
struct init_sccb {int mask_length; TYPE_1__ header; } ;
typedef int sccb_mask_t ;
struct TYPE_5__ {struct init_sccb* sccb; int * callback_data; int * callback; scalar_t__ start_count; int status; int command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct init_sccb*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (struct init_sccb*,int ) ;
 int FUNC_3 (struct init_sccb*,int ) ;
 int FUNC_4 (struct init_sccb*,int ) ;
 int FUNC_5 (struct init_sccb*,int ) ;
 TYPE_2__ VAR_3 ;
 struct init_sccb* VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static inline void
FUNC_6(sccb_mask_t VAR_6, sccb_mask_t VAR_7)
{
 struct init_sccb *VAR_8 = VAR_4;

 FUNC_0(VAR_8);
 FUNC_1(&VAR_3, 0, sizeof(struct sclp_req));
 VAR_3.command = VAR_0;
 VAR_3.status = VAR_2;
 VAR_3.start_count = 0;
 VAR_3.callback = ((void*)0);
 VAR_3.callback_data = ((void*)0);
 VAR_3.sccb = VAR_8;
 VAR_8->header.length = sizeof(*VAR_8);
 if (VAR_5)
  VAR_8->mask_length = VAR_1;
 else
  VAR_8->mask_length = sizeof(sccb_mask_t);
 FUNC_2(VAR_8, VAR_6);
 FUNC_5(VAR_8, VAR_7);
 FUNC_3(VAR_8, 0);
 FUNC_4(VAR_8, 0);
}
