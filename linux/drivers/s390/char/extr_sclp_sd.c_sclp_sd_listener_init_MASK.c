
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sclp_sd_listener {int completion; int id; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sclp_sd_listener*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct sclp_sd_listener *VAR_0, u32 VAR_1)
{
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->id = VAR_1;
 FUNC_0(&VAR_0->completion);
}
