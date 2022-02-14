
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wa_xfer {int segs_done; } ;
struct wa_seg {int status; } ;
typedef enum wa_seg_status { ____Placeholder_wa_seg_status } wa_seg_status ;


 int FUNC_0 (struct wa_xfer*) ;

__attribute__((used)) static unsigned FUNC_1(struct wa_xfer *VAR_0,
 struct wa_seg *VAR_1, enum wa_seg_status VAR_2)
{
 VAR_1->status = VAR_2;
 VAR_0->segs_done++;


 return FUNC_0(VAR_0);
}
