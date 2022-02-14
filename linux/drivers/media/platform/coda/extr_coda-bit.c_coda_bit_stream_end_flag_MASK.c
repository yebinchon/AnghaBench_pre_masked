
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct coda_dev {TYPE_1__* devtype; } ;
struct coda_ctx {scalar_t__ idx; int bit_stream_param; struct coda_dev* dev; } ;
struct TYPE_2__ {scalar_t__ product; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct coda_dev*) ;
 scalar_t__ FUNC_1 (struct coda_dev*,int ) ;
 int FUNC_2 (struct coda_dev*,int ,int ) ;

void FUNC_3(struct coda_ctx *VAR_4)
{
 struct coda_dev *VAR_5 = VAR_4->dev;

 VAR_4->bit_stream_param |= VAR_1;


 if ((VAR_5->devtype->product == VAR_0) &&
     FUNC_0(VAR_5) &&
     (VAR_4->idx == FUNC_1(VAR_5, VAR_3))) {
  FUNC_2(VAR_5, VAR_4->bit_stream_param,
      VAR_2);
 }
}
