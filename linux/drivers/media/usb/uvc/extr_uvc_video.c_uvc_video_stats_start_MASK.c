
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int min_sof; } ;
struct TYPE_4__ {TYPE_1__ stream; } ;
struct uvc_streaming {TYPE_2__ stats; } ;


 int FUNC_0 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct uvc_streaming *VAR_0)
{
 FUNC_0(&VAR_0->stats, 0, sizeof(VAR_0->stats));
 VAR_0->stats.stream.min_sof = 2048;
}
