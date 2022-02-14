
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_edid {int blocks; int start_block; int pad; } ;


 int FUNC_0 (char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(const void *VAR_0, bool VAR_1)
{
 const struct v4l2_edid *VAR_2 = VAR_0;

 FUNC_0("pad=%u, start_block=%u, blocks=%u\n",
  VAR_2->pad, VAR_2->start_block, VAR_2->blocks);
}
