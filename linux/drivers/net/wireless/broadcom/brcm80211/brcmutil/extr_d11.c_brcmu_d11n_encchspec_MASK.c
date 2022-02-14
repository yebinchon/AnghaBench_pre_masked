
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmu_chan {scalar_t__ bw; scalar_t__ chnum; int chspec; int sb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct brcmu_chan *VAR_9)
{
 if (VAR_9->bw == VAR_0)
  VAR_9->sb = VAR_1;

 VAR_9->chspec = 0;
 FUNC_0(&VAR_9->chspec, VAR_2,
   VAR_3, VAR_9->chnum);
 FUNC_0(&VAR_9->chspec, VAR_7,
   0, FUNC_2(VAR_9->sb));
 FUNC_0(&VAR_9->chspec, VAR_6,
   0, FUNC_1(VAR_9->bw));

 if (VAR_9->chnum <= VAR_8)
  VAR_9->chspec |= VAR_4;
 else
  VAR_9->chspec |= VAR_5;
}
