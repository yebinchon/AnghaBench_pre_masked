
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; int type; int tuner; } ;


 int FUNC_0 (char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(const void *VAR_0, bool VAR_1)
{
 const struct v4l2_frequency *VAR_2 = VAR_0;

 FUNC_0("tuner=%u, type=%u, frequency=%u\n",
    VAR_2->tuner, VAR_2->type, VAR_2->frequency);
}
