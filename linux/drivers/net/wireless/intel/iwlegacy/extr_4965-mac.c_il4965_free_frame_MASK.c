
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int free_frames; } ;
struct il_frame {int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct il_frame*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct il_priv *VAR_0, struct il_frame *VAR_1)
{
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 FUNC_0(&VAR_1->list, &VAR_0->free_frames);
}
