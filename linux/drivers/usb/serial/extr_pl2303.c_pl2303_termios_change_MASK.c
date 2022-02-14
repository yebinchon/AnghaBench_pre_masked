
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ktermios {int c_iflag; scalar_t__* c_cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (struct ktermios const*,struct ktermios const*) ;

__attribute__((used)) static bool FUNC_1(const struct ktermios *VAR_4, const struct ktermios *VAR_5)
{
 bool VAR_6;

 VAR_6 = ((VAR_4->c_iflag ^ VAR_5->c_iflag) & (VAR_1 | VAR_0)) ||
   VAR_4->c_cc[VAR_2] != VAR_5->c_cc[VAR_2] ||
   VAR_4->c_cc[VAR_3] != VAR_5->c_cc[VAR_3];

 return FUNC_0(VAR_4, VAR_5) || VAR_6;
}
