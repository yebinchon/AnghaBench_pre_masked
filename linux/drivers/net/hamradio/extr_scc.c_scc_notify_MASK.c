
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int nospace; } ;
struct TYPE_3__ {scalar_t__ fulldup; } ;
struct scc_channel {TYPE_2__ stat; TYPE_1__ kiss; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int) ;
 int FUNC_1 (struct scc_channel*,struct sk_buff*) ;
 char* FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static inline void FUNC_3(struct scc_channel *VAR_2, int VAR_3)
{
 struct sk_buff *VAR_4;
 char *VAR_5;

        if (VAR_2->kiss.fulldup != VAR_0)
  return;

 VAR_4 = FUNC_0(2);
 if (VAR_4 != ((void*)0))
 {
  VAR_5 = FUNC_2(VAR_4, 2);
  *VAR_5++ = VAR_1;
  *VAR_5++ = VAR_3;
  FUNC_1(VAR_2, VAR_4);
 } else
  VAR_2->stat.nospace++;
}
