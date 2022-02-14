
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void*** service_lines; } ;
struct TYPE_3__ {TYPE_2__ sliced; } ;
struct v4l2_format {TYPE_1__ fmt; int type; } ;
struct pvr2_hdw {scalar_t__ decoder_client_id; int v4l2_dev; } ;
typedef int fmt ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (struct v4l2_format*,int ,int) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_2 (int *,scalar_t__,int ,int ,TYPE_2__*) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_3(struct pvr2_hdw *VAR_6)
{
 struct v4l2_format VAR_7;
 if (VAR_6->decoder_client_id != VAR_0) {

  return;
 }

 FUNC_1(VAR_1,
     "Module ID %u: Executing cx25840 VBI hack",
     VAR_6->decoder_client_id);
 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.type = VAR_2;
 VAR_7.fmt.sliced.service_lines[0][21] = VAR_3;
 VAR_7.fmt.sliced.service_lines[1][21] = VAR_3;
 FUNC_2(&VAR_6->v4l2_dev, VAR_6->decoder_client_id,
        VAR_5, VAR_4, &VAR_7.fmt.sliced);
}
