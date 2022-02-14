
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ns2_pinctrl {struct ns2_mux_log* mux_log; int dev; } ;
struct TYPE_2__ {int shift; scalar_t__ alt; scalar_t__ offset; void* base; } ;
struct ns2_mux_log {int is_configured; TYPE_1__ mux; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 struct ns2_mux_log* FUNC_0 (int ,unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct ns2_pinctrl *VAR_7)
{
 struct ns2_mux_log *VAR_8;
 unsigned int VAR_9;

 VAR_7->mux_log = FUNC_0(VAR_7->dev, VAR_3,
     sizeof(struct ns2_mux_log),
     VAR_1);
 if (!VAR_7->mux_log)
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  VAR_7->mux_log[VAR_9].is_configured = 0;

 VAR_8 = &VAR_7->mux_log[0];
 VAR_8->mux.base = VAR_5;
 VAR_8->mux.offset = 0;
 VAR_8->mux.shift = 31;
 VAR_8->mux.alt = 0;






 for (VAR_9 = 1; VAR_9 < (VAR_3 - VAR_4); VAR_9++) {
  VAR_8 = &VAR_7->mux_log[VAR_9];
  VAR_8->mux.base = VAR_5;
  VAR_8->mux.offset = VAR_2;
  VAR_8->mux.shift = 32 - (VAR_9 * 2);
  VAR_8->mux.alt = 0;
 }





 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_8 = &VAR_7->mux_log[(VAR_3 - VAR_4) + VAR_9];
  VAR_8->mux.base = VAR_6;
  VAR_8->mux.offset = 0;
  VAR_8->mux.shift = VAR_9;
  VAR_8->mux.alt = 0;
 }
 return 0;
}
