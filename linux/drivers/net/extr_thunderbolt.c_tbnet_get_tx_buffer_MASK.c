
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tbnet_ring {struct tbnet_frame* frames; int cons; int ring; } ;
struct TYPE_2__ {int buffer_phy; scalar_t__ size; } ;
struct tbnet_frame {TYPE_1__ frame; } ;
struct tbnet {struct tbnet_ring tx_ring; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;
 struct device* FUNC_1 (int ) ;
 int FUNC_2 (struct tbnet_ring*) ;
 int FUNC_3 (struct tbnet_frame*) ;

__attribute__((used)) static struct tbnet_frame *FUNC_4(struct tbnet *VAR_2)
{
 struct tbnet_ring *VAR_3 = &VAR_2->tx_ring;
 struct device *VAR_4 = FUNC_1(VAR_3->ring);
 struct tbnet_frame *VAR_5;
 unsigned int VAR_6;

 if (!FUNC_2(VAR_3))
  return ((void*)0);

 VAR_6 = VAR_3->cons++ & (VAR_1 - 1);

 VAR_5 = &VAR_3->frames[VAR_6];
 VAR_5->frame.size = 0;

 FUNC_0(VAR_4, VAR_5->frame.buffer_phy,
    FUNC_3(VAR_5), VAR_0);

 return VAR_5;
}
