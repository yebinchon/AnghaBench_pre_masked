
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {int is_in; scalar_t__ stalled; scalar_t__ is_iso; int enabled; } ;
struct TYPE_3__ {int desc; } ;
struct ast_vhub_ep {TYPE_2__ epn; TYPE_1__ ep; } ;
struct ast_vhub_dev {int ep0; struct ast_vhub_ep** epns; } ;


 int VAR_0 ;
 int FUNC_0 (struct ast_vhub_dev*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct ast_vhub_dev *VAR_5,
         u16 VAR_6, u16 VAR_7)
{
 int VAR_8 = VAR_6 & VAR_3;
 struct ast_vhub_ep *VAR_9;
 u8 VAR_10 = 0;

 FUNC_0(VAR_5, "GET_STATUS(ep%d)\n", VAR_8);

 if (VAR_8 >= VAR_0)
  return VAR_4;
 if (VAR_8 != 0) {
  VAR_9 = VAR_5->epns[VAR_8 - 1];
  if (!VAR_9)
   return VAR_4;
  if (!VAR_9->epn.enabled || !VAR_9->ep.desc || VAR_9->epn.is_iso ||
      VAR_9->epn.is_in != !!(VAR_6 & VAR_1))
   return VAR_4;
  if (VAR_9->epn.stalled)
   VAR_10 |= 1 << VAR_2;
 }

 return FUNC_1(&VAR_5->ep0, VAR_10, 0);
}
