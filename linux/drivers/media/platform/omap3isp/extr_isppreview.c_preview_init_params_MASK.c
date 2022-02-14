
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_11__ {void* maxY; void* minY; void* maxC; void* minC; } ;
struct TYPE_20__ {int blue; int green; int red; } ;
struct TYPE_19__ {void* coef3; void* coef2; void* coef1; void* coef0; int dgain; } ;
struct TYPE_18__ {int red; int green; int blue; } ;
struct TYPE_17__ {int couplet_mode_en; int * detect_correct; } ;
struct TYPE_16__ {int table; int spread; } ;
struct TYPE_15__ {int table; } ;
struct TYPE_14__ {scalar_t__ hypf_en; int thres; int gain; } ;
struct TYPE_13__ {int gradthrs_vert; int gradthrs_horz; int table; int format; } ;
struct prev_params {int contrast; int brightness; int features; TYPE_10__ yclimit; int csc; int rgb2rgb; TYPE_9__ blkadj; TYPE_8__ wbal; TYPE_7__ gamma; TYPE_6__ dcor; TYPE_5__ nf; TYPE_4__ luma; TYPE_3__ csup; TYPE_2__ cfa; scalar_t__ update; scalar_t__ busy; } ;
struct TYPE_12__ {struct prev_params* params; int active; int lock; } ;
struct isp_prev_device {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 unsigned int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_36 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct isp_prev_device *VAR_37)
{
 struct prev_params *VAR_38;
 unsigned int VAR_39;

 FUNC_1(&VAR_37->params.lock);

 VAR_37->params.active = ~0;
 VAR_37->params.params[0].busy = 0;
 VAR_37->params.params[0].update = VAR_25 - 1;
 VAR_37->params.params[1].busy = 0;
 VAR_37->params.params[1].update = 0;

 VAR_38 = &VAR_37->params.params[0];


 VAR_38->contrast = VAR_13 * VAR_14;
 VAR_38->brightness = VAR_11 * VAR_12;
 VAR_38->cfa.format = VAR_17;
 FUNC_0(VAR_38->cfa.table, VAR_31,
        sizeof(VAR_38->cfa.table));
 VAR_38->cfa.gradthrs_horz = VAR_4;
 VAR_38->cfa.gradthrs_vert = VAR_5;
 VAR_38->csup.gain = VAR_6;
 VAR_38->csup.thres = VAR_7;
 VAR_38->csup.hypf_en = 0;
 FUNC_0(VAR_38->luma.table, VAR_35,
        sizeof(VAR_38->luma.table));
 VAR_38->nf.spread = VAR_8;
 FUNC_0(VAR_38->nf.table, VAR_36, sizeof(VAR_38->nf.table));
 VAR_38->dcor.couplet_mode_en = 1;
 for (VAR_39 = 0; VAR_39 < VAR_24; VAR_39++)
  VAR_38->dcor.detect_correct[VAR_39] = VAR_0;
 FUNC_0(VAR_38->gamma.blue, VAR_34, sizeof(VAR_38->gamma.blue));
 FUNC_0(VAR_38->gamma.green, VAR_34, sizeof(VAR_38->gamma.green));
 FUNC_0(VAR_38->gamma.red, VAR_34, sizeof(VAR_38->gamma.red));
 VAR_38->wbal.dgain = VAR_10;
 VAR_38->wbal.coef0 = VAR_9;
 VAR_38->wbal.coef1 = VAR_9;
 VAR_38->wbal.coef2 = VAR_9;
 VAR_38->wbal.coef3 = VAR_9;
 VAR_38->blkadj.red = VAR_3;
 VAR_38->blkadj.green = VAR_2;
 VAR_38->blkadj.blue = VAR_1;
 VAR_38->rgb2rgb = VAR_33;
 VAR_38->csc = VAR_32;
 VAR_38->yclimit.minC = VAR_16;
 VAR_38->yclimit.maxC = VAR_15;
 VAR_38->yclimit.minY = VAR_16;
 VAR_38->yclimit.maxY = VAR_15;

 VAR_38->features = VAR_20 | VAR_23
    | VAR_27 | VAR_26
    | VAR_18 | VAR_30
    | VAR_28 | VAR_21
    | VAR_29 | VAR_19
    | VAR_22;
}
