
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl18xx_priv {scalar_t__ cmd_buf; } ;
struct wl1271 {struct wl18xx_priv* priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,void*,size_t) ;
 int FUNC_1 (scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (struct wl1271*,int,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(struct wl1271 *VAR_1, int VAR_2,
          void *VAR_3, size_t VAR_4)
{
 struct wl18xx_priv *VAR_5 = VAR_1->priv;

 FUNC_0(VAR_5->cmd_buf, VAR_3, VAR_4);
 FUNC_1(VAR_5->cmd_buf + VAR_4, 0, VAR_0 - VAR_4);

 return FUNC_2(VAR_1, VAR_2, VAR_5->cmd_buf,
       VAR_0, 0);
}
