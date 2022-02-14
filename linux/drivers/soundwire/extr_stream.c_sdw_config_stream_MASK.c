
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rate; scalar_t__ bps; int ch_count; } ;
struct sdw_stream_runtime {TYPE_1__ params; int type; int name; } ;
struct sdw_stream_config {scalar_t__ frame_rate; scalar_t__ bps; scalar_t__ ch_count; int type; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1,
        struct sdw_stream_runtime *VAR_2,
        struct sdw_stream_config *VAR_3,
        bool VAR_4)
{
 if (VAR_2->params.rate &&
     VAR_2->params.rate != VAR_3->frame_rate) {
  FUNC_0(VAR_1, "rate not matching, stream:%s\n", VAR_2->name);
  return -VAR_0;
 }

 if (VAR_2->params.bps &&
     VAR_2->params.bps != VAR_3->bps) {
  FUNC_0(VAR_1, "bps not matching, stream:%s\n", VAR_2->name);
  return -VAR_0;
 }

 VAR_2->type = VAR_3->type;
 VAR_2->params.rate = VAR_3->frame_rate;
 VAR_2->params.bps = VAR_3->bps;


 if (VAR_4)
  VAR_2->params.ch_count += VAR_3->ch_count;

 return 0;
}
