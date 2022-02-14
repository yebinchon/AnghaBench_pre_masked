
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cphy {int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct cphy*,int ,int*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct cphy *VAR_6)
{
 u32 VAR_7;


 (void) FUNC_1(VAR_6,
   VAR_5, &VAR_7);


 if (FUNC_2(VAR_6->adapter)) {
  FUNC_3(VAR_6->adapter, VAR_0, &VAR_7);
  VAR_7 |= VAR_1;
  if (FUNC_0(VAR_6->adapter))
      VAR_7 |= VAR_2|VAR_3|VAR_4;
  FUNC_4(VAR_6->adapter, VAR_0, VAR_7);
 }
 return 0;
}
