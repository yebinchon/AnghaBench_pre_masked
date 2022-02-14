
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xenvif {int dummy; } ;
struct xen_netif_ctrl_request {int type; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int FUNC_0 (struct xenvif*,struct xen_netif_ctrl_request const*,int ,int ) ;
 int FUNC_1 (struct xenvif*) ;
 int FUNC_2 (struct xenvif*,int *) ;
 int FUNC_3 (struct xenvif*,int ) ;
 int FUNC_4 (struct xenvif*,int ) ;
 int FUNC_5 (struct xenvif*,int ,int ) ;
 int FUNC_6 (struct xenvif*,int ,int ,int ) ;
 int FUNC_7 (struct xenvif*,int ) ;

__attribute__((used)) static void FUNC_8(struct xenvif *VAR_3,
     const struct xen_netif_ctrl_request *VAR_4)
{
 u32 VAR_5 = VAR_1;
 u32 VAR_6 = 0;

 switch (VAR_4->type) {
 case 132:
  VAR_5 = FUNC_3(VAR_3, VAR_4->data[0]);
  break;

 case 134:
  VAR_5 = FUNC_2(VAR_3, &VAR_6);
  break;

 case 131:
  VAR_5 = FUNC_4(VAR_3, VAR_4->data[0]);
  break;

 case 130:
  VAR_5 = FUNC_5(VAR_3, VAR_4->data[0],
          VAR_4->data[1]);
  break;

 case 133:
  VAR_5 = VAR_2;
  VAR_6 = VAR_0;
  break;

 case 128:
  VAR_5 = FUNC_7(VAR_3,
            VAR_4->data[0]);
  break;

 case 129:
  VAR_5 = FUNC_6(VAR_3, VAR_4->data[0],
       VAR_4->data[1],
       VAR_4->data[2]);
  break;

 default:
  break;
 }

 FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_1(VAR_3);
}
