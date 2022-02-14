
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_hw_freq_seek {int rangehigh; int rangelow; int spacing; int wrap_around; int seek_upward; int type; int tuner; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(const void *VAR_0, bool VAR_1)
{
 const struct v4l2_hw_freq_seek *VAR_2 = VAR_0;

 FUNC_0("tuner=%u, type=%u, seek_upward=%u, wrap_around=%u, spacing=%u, rangelow=%u, rangehigh=%u\n",
  VAR_2->tuner, VAR_2->type, VAR_2->seek_upward, VAR_2->wrap_around, VAR_2->spacing,
  VAR_2->rangelow, VAR_2->rangehigh);
}
