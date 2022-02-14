
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
 int VAR_6 ;
 int FUNC_0 (struct cphy*,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct cphy *VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;
 FUNC_0(VAR_7, VAR_2, VAR_6, &VAR_9);

 FUNC_0(VAR_7, VAR_2, VAR_4, &VAR_9);
 if (FUNC_1(VAR_7->adapter)) {
  FUNC_2(VAR_7->adapter, VAR_0, &VAR_8);
  VAR_8 |= VAR_1;
  FUNC_3(VAR_7->adapter, VAR_0, VAR_8);
 }
 return 0;
}
