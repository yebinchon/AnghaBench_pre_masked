
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvaser_pciefd_cfg_param {int len; int data; } ;
struct kvaser_pciefd_cfg_img {struct kvaser_pciefd_cfg_param* params; } ;
struct kvaser_pciefd {int nr_channels; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct kvaser_pciefd *VAR_1,
       struct kvaser_pciefd_cfg_img *VAR_2)
{
 struct kvaser_pciefd_cfg_param *VAR_3;

 VAR_3 = &VAR_2->params[VAR_0];
 FUNC_1(&VAR_1->nr_channels, VAR_3->data, FUNC_0(VAR_3->len));
}
