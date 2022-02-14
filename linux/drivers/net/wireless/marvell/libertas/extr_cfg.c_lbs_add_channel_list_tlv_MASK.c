
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mrvl_ie_header {void* len; void* type; } ;
struct lbs_private {int scan_channel; TYPE_2__* scan_req; } ;
struct TYPE_6__ {int passivescan; } ;
struct chanscanparamset {void* maxscantime; TYPE_3__ chanscanmode; int channumber; int radiotype; } ;
struct TYPE_5__ {TYPE_1__** channels; } ;
struct TYPE_4__ {int hw_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int FUNC_2(struct lbs_private *VAR_4, u8 *VAR_5,
        int VAR_6, int VAR_7)
{
 int VAR_8 = sizeof(struct chanscanparamset) *
  (VAR_6 - VAR_4->scan_channel);

 struct mrvl_ie_header *VAR_9 = (void *) VAR_5;
 VAR_9->type = FUNC_0(VAR_3);
 VAR_9->len = FUNC_0(VAR_8);
 VAR_5 += sizeof(struct mrvl_ie_header);



 FUNC_1(VAR_5, 0, VAR_8);

 while (VAR_4->scan_channel < VAR_6) {
  struct chanscanparamset *VAR_10 = (void *) VAR_5;

  VAR_10->radiotype = VAR_0;
  VAR_10->channumber =
   VAR_4->scan_req->channels[VAR_4->scan_channel]->hw_value;
  if (VAR_7) {
   VAR_10->maxscantime = FUNC_0(VAR_1);
  } else {
   VAR_10->chanscanmode.passivescan = 1;
   VAR_10->maxscantime = FUNC_0(VAR_2);
  }
  VAR_5 += sizeof(struct chanscanparamset);
  VAR_4->scan_channel++;
 }
 return sizeof(struct mrvl_ie_header) + VAR_8;
}
