
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ionic_lif {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ionic_lif*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static u64 FUNC_2(struct ionic_lif *VAR_11)
{
 u64 VAR_12 = 0;


 VAR_12 += VAR_7;


 VAR_12 += FUNC_0(VAR_11) * VAR_10;


 VAR_12 += FUNC_0(VAR_11) * VAR_8;

 if (FUNC_1(VAR_1, VAR_11->state) &&
     FUNC_1(VAR_0, VAR_11->state)) {

  VAR_12 += FUNC_0(VAR_11) * (VAR_4 +
          VAR_9 +
          VAR_5 +
          VAR_3);


  VAR_12 += FUNC_0(VAR_11) * (VAR_4 +
          VAR_5 +
          VAR_6 +
          VAR_2);
 }

 return VAR_12;
}
