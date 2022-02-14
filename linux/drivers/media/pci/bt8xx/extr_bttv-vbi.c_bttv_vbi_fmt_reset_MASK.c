
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int samples_per_line; int* start; unsigned int* count; scalar_t__* reserved; scalar_t__ flags; int offset; int sample_format; int sampling_rate; } ;
struct bttv_vbi_fmt {int end; struct bttv_tvnorm const* tvnorm; TYPE_1__ fmt; } ;
struct TYPE_5__ {int top; } ;
struct TYPE_6__ {TYPE_2__ defrect; } ;
struct bttv_tvnorm {int* vbistart; int vbipack; TYPE_3__ cropcap; int Fsc; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 struct bttv_tvnorm* VAR_4 ;

void FUNC_1(struct bttv_vbi_fmt *VAR_5, unsigned int VAR_6)
{
 const struct bttv_tvnorm *VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;

 VAR_7 = &VAR_4[VAR_6];

 VAR_5->fmt.sampling_rate = VAR_7->Fsc;
 VAR_5->fmt.samples_per_line = VAR_1;
 VAR_5->fmt.sample_format = VAR_0;
 VAR_5->fmt.offset = VAR_3;
 VAR_5->fmt.start[0] = VAR_7->vbistart[0];
 VAR_5->fmt.start[1] = VAR_7->vbistart[1];
 VAR_5->fmt.count[0] = VAR_2;
 VAR_5->fmt.count[1] = VAR_2;
 VAR_5->fmt.flags = 0;
 VAR_5->fmt.reserved[0] = 0;
 VAR_5->fmt.reserved[1] = 0;



 VAR_8 = 1024 + VAR_7->vbipack * 4;
 VAR_9 = ((VAR_7->cropcap.defrect.top >> 1)
       - VAR_7->vbistart[0]);

 FUNC_0(VAR_8 > VAR_1);
 FUNC_0(VAR_9 > VAR_2);

 VAR_5->tvnorm = VAR_7;


 VAR_5->end = VAR_7->vbistart[0] * 2 + 2;
}
