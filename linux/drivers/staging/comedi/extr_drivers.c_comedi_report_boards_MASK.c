
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_driver {char const* const driver_name; char** board_name; unsigned int num_names; int offset; } ;


 int FUNC_0 (char*,char const* const) ;

__attribute__((used)) static void FUNC_1(struct comedi_driver *VAR_0)
{
 unsigned int VAR_1;
 const char *const *VAR_2;

 FUNC_0("comedi: valid board names for %s driver are:\n",
  VAR_0->driver_name);

 VAR_2 = VAR_0->board_name;
 for (VAR_1 = 0; VAR_1 < VAR_0->num_names; VAR_1++) {
  FUNC_0(" %s\n", *VAR_2);
  VAR_2 = (const char **)((char *)VAR_2 + VAR_0->offset);
 }

 if (VAR_0->num_names == 0)
  FUNC_0(" %s\n", VAR_0->driver_name);
}
