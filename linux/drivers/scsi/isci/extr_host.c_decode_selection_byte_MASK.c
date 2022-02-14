
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum cable_selections { ____Placeholder_cable_selections } cable_selections ;



__attribute__((used)) static enum cable_selections FUNC_0(
 int VAR_0,
 unsigned char VAR_1)
{
 return ((VAR_1 & (1 << VAR_0)) ? 1 : 0)
  + (VAR_1 & (1 << (VAR_0 + 4)) ? 2 : 0);
}
