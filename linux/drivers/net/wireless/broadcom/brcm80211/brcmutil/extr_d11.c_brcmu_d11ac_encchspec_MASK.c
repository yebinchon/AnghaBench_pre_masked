
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmu_chan {scalar_t__ bw; scalar_t__ sb; scalar_t__ chnum; int chspec; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int *,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct brcmu_chan *VAR_12)
{
 if (VAR_12->bw == VAR_0 || VAR_12->sb == VAR_2)
  VAR_12->sb = VAR_1;

 FUNC_0(&VAR_12->chspec, VAR_3,
   VAR_4, VAR_12->chnum);
 FUNC_0(&VAR_12->chspec, VAR_9,
   VAR_10, VAR_12->sb);
 FUNC_0(&VAR_12->chspec, VAR_8,
   0, FUNC_1(VAR_12->bw));

 VAR_12->chspec &= ~VAR_7;
 if (VAR_12->chnum <= VAR_11)
  VAR_12->chspec |= VAR_5;
 else
  VAR_12->chspec |= VAR_6;
}
